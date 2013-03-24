//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Mark Levitt on 07/03/2013.
//  Copyright (c) 2013 Mark Levitt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

// Designated initialiser 
- (id)initWithCardCount:(NSUInteger)count
              usingDeck:(Deck *)deck;

- (void)flipCardAtIndex:(NSUInteger)index;

- (Card *)cardAtIndex:(NSUInteger)index;



@property (readonly, nonatomic) int score;

@end
