//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SIGIndexViewLogic : NSObject
{
    NSArray *_titleRanges;
    NSArray *_titles;
    NSArray *_visibleTitles;
}

@property(readonly, nonatomic) NSArray *visibleTitles; // @synthesize visibleTitles=_visibleTitles;
@property(readonly, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (unsigned long long)visibleTitleIndexForTitleIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfTitleAtPosition:(double)arg1 inRange:(struct _NSRange)arg2;
- (id)initWithTitles:(id)arg1 possibleSpecialTitles:(id)arg2 maximumVisibleTitles:(unsigned long long)arg3;

@end

