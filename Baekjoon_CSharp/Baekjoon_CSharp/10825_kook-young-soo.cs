using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;

namespace Baekjoon_CSharp
{
    struct Student
    {
        public string _name;
        public int _kor;
        public int _eng;
        public int _math;
        public Student(string name, int k, int e, int m)
        {
            _name = name;
            _kor = k; _eng = e; _math = m;
        }
    }

    class _10825_kook_young_soo
    {
        static void Main()
        {
            int n = int.Parse(Console.ReadLine());
            List<Student> students = new List<Student>();
            for(int i = 0; i < n; i++)
            {
                string[] input = Console.ReadLine().Split();
                string name = input[0];
                int k = int.Parse(input[1]);
                int e = int.Parse(input[2]);
                int m = int.Parse(input[3]);

                students.Add(new Student(name, k, e, m));
            }

            var orderedStudents = 
                students
                .OrderByDescending(s => s._kor)
                .ThenBy(s => s._eng)
                .ThenByDescending(s => s._math)
                .ThenBy(s => s._name, StringComparer.Ordinal);

            StringBuilder sb = new StringBuilder();


            foreach (var s in orderedStudents)
                sb.AppendLine(s._name);

            Console.WriteLine(sb.ToString());
        }
    }
}
