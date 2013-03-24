//
//  Card.h
//  Matchismo
//
//  Created by Mark Levitt on 29/01/2013.
//  Copyright (c) 2013 Mark Levitt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isFaceUp) BOOL faceUp;
@property (nonatomic, getter = isUnplayable) BOOL unplayable;

- (int)match:(NSArray *)otherCards;

@end
