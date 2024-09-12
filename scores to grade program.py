student_scores = {
    'Harry': 88,
    'Ron': 78,
    'Hermione': 95,
    'Draco': 75,
    'Neville': 60
}
student_grades ={}
for key in student_scores:
    if 91<=student_scores[key]<=100:
        student_scores[key]="Outstanding"
    elif 81<=student_scores[key]<=90:
        student_scores[key]="Exceeds Expectations"
    elif 71<=student_scores[key]<=80:
        student_scores[key]="Acceptable"
    elif student_scores[key]<=70:
        student_scores[key]="Fail"
student_grades=student_scores
print(student_grades)