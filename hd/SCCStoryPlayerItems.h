//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray;

@interface SCCStoryPlayerItems : SCComposerMarshallableObject
{
    NSArray *_items;
    double _startingIndex;
}

@property(nonatomic) double startingIndex; // @synthesize startingIndex=_startingIndex;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithItems:(id)arg1 startingIndex:(double)arg2;

@end

