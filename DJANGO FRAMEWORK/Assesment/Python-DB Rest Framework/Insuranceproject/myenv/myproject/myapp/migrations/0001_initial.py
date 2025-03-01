# Generated by Django 5.1.4 on 2024-12-31 10:56

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Policy',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('policy_name', models.CharField(max_length=100)),
                ('policy_type', models.CharField(choices=[('Health', 'Health'), ('Life', 'Life'), ('Car', 'Car'), ('Home', 'Home')], max_length=50)),
                ('coverage_amount', models.DecimalField(decimal_places=2, max_digits=10)),
                ('premium', models.DecimalField(decimal_places=2, max_digits=10)),
                ('start_date', models.DateField()),
                ('end_date', models.DateField()),
            ],
        ),
    ]
