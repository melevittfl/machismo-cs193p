//
//  Card.m
//  Matchismo
//
//  Created by Mark Levitt on 29/01/2013.
//  Copyright (c) 2013 Mark Levitt. All rights reserved.
//

#import "Card.h"

@implementation Card

-(int)match:(NSArray *)otherCards {
    int score =0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    
    return score;
}

@end
