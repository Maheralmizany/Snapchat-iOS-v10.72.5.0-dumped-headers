//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOrderedDictionary.h"

#import "NSCoding.h"

@interface SCAccessOrderedDictionary : SCOrderedDictionary <NSCoding>
{
}

- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)onOrderUpdated;
- (id)objectForKey:(id)arg1 updateOrder:(_Bool)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithMaxSize:(long long)arg1;

@end

