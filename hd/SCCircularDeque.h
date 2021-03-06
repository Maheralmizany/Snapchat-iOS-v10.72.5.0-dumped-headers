//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableArray;

@interface SCCircularDeque : NSObject <NSFastEnumeration>
{
    NSMutableArray *_array;
    unsigned long long _start;
    unsigned long long _mutationCounter;
    unsigned long long _capacity;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)removeAllObjects;
- (void)pushBack:(id)arg1;
- (id)popFront;
- (id)_objectAtIndex:(unsigned long long)arg1;
- (id)back;
- (id)front;
- (_Bool)isEmpty;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

