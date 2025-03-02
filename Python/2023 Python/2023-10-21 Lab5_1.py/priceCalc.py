def matsCalculator(material):
    if material.strip() == "brick":
        costPerMeter = 20
        hoursPerMeter = 10
        costPerHour = 15
        return costPerMeter, hoursPerMeter, costPerHour
    elif material.strip() == "stone":
        costPerMeter = 4
        hoursPerMeter = 20
        costPerHour = 10
        return costPerMeter, hoursPerMeter, costPerHour
    elif material.strip() == "wood":
        costPerMeter = 10
        hoursPerMeter = 5
        costPerHour = 12.25
        return costPerMeter, hoursPerMeter, costPerHour
    else:
        costPerMeter = 0
        hoursPerMeter = 0
        costPerHour = 0
        return costPerMeter, hoursPerMeter, costPerHour