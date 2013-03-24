//
//  PlayingCard.h
//  Matchismo
//
//  Created by Mark Levitt on 30/01/2013.
//  Copyright (c) 2013 Mark Levitt. All rights reserved.
//
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;


+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
