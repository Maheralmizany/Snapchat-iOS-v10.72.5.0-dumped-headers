//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface SCZeroDependencyExperimentAccessor : NSObject
{
    NSMutableDictionary *_accessedExperiments;
    NSDictionary *_backingDictionary;
}

- (void).cxx_destruct;
- (void)updateBackingDictionary:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithBackingDictionary:(id)arg1;

@end

