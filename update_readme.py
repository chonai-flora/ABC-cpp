import glob

header = ["A", "B", "C", "D", "E", "F", "G", "H/Ex"]
problems = ["a", "b", "c", "d", "e", "f", "g", "h"]
paths = sorted(glob.glob("abc*"))
base_url = "https://atcoder.jp/contests/"

with open("README.md", "w") as f:
    f.write("# ABC-cpp\n\n")
    f.write("| |" + "|".join(header) + "|\n")
    f.write("|---" * 9 + "|\n")

    for path in paths:
        marks = ["&emsp;"] * 8
        files = glob.glob("./{}/*".format(path))

        for file in files:
            id = file.split(".cpp")[0][-1]
            idx = problems.index(id)
            marks[idx] = ":heavy_check_mark:"

        body = [path.upper()]
        for idx, mark in enumerate(marks):
            link = "[{0}]({1}{2}/tasks/{3}_{4})".format(
                mark, base_url, path, path, problems[idx])
            body.append(link)        
        
        f.write("|" + "|".join(body) + "|\n")

f.close()