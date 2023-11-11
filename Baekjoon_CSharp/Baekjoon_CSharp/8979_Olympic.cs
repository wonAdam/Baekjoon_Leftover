using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Baekjoon_CSharp
{
    internal class _8979_Olympic
    {
        struct Record
        {
            public int country;
            public int gold;
            public int silver;
            public int bronze;
        }


        static void Main(string[] arg)
        {
            var nm = Console.ReadLine().Split().Select(int.Parse).ToList();
            int n = nm[0];
            int m = nm[1];

            List<Record> records = new List<Record>();
            for(int i = 0; i < n; i++) 
            {
                var cgsb = Console.ReadLine().Split().Select(int.Parse).ToList();
                int country = cgsb[0];
                int gold = cgsb[1];
                int silver = cgsb[2];
                int bronze = cgsb[3];

                Record record = new Record();
                record.country = country;
                record.gold = gold;
                record.silver = silver;
                record.bronze = bronze;
                records.Add(record);
            }

            records.Sort((record1, record2) =>
            {
                if(record1.gold != record2.gold) return record2.gold - record1.gold;

                if (record1.silver != record2.silver) return record2.silver - record1.silver;

                if (record1.bronze != record2.bronze) return record2.bronze - record1.bronze;

                return 0;
            });


            for(int i = 0; i <  records.Count; i++) 
            {
                if(records[i].country == m)
                {
                    Console.WriteLine(i + 1);
                    break;
                }
            }

        }
    }
}
