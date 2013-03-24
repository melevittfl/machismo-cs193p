//
//  Deck.h
//  Matchismo
//
//  Created by Mark Levitt on 29/01/2013.
//  Copyright (c) 2013 Mark Levitt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL) atTop;

- (Card *)drawRandomCard;

@end
