import glob
header = ["A", "B", "C", "D", "E", "F", "G", "H/Ex"]

with open("answer_status.md", "w") as f:
    f.write("| |" + "|".join(header) + "|\n")
    f.write("|---" * 9 + "|\n")

    for dir in range(260, 279 + 1):
        path = "abc{}".format(dir)
        body = [path.upper()] + [" "] * 8
        files = glob.glob("./{}/*".format(path))

        for file in files:
            id = file.split(".cpp")[0][-1].upper()
            idx = len(header)
            if id in header:
                idx = header.index(id) + 1
            body[idx] = ":heavy_check_mark:"

        f.write("|" + "|".join(body) + "|\n")

f.close()