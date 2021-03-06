//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCLRUCacheNode : NSObject
{
    id _key;
    id _value;
    unsigned long long _cost;
    SCLRUCacheNode *_next;
    SCLRUCacheNode *_previous;
}

@property(nonatomic) __weak SCLRUCacheNode *previous; // @synthesize previous=_previous;
@property(nonatomic) __weak SCLRUCacheNode *next; // @synthesize next=_next;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

