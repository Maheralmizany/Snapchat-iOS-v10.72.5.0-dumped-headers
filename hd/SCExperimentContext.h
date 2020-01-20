//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface SCExperimentContext : NSObject
{
    // Error parsing type: Ai, name: _exposureCount
    NSString *_experimentId;
    NSMutableDictionary *_infoDictionary;
}

- (void).cxx_destruct;
- (id)_stringForParameter:(id)arg1 defaultValue:(id)arg2;
- (double)_doubleForParameter:(id)arg1 defaultValue:(double)arg2;
- (long long)_integerForParameter:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)_boolForParameter:(id)arg1 defaultValue:(_Bool)arg2;
- (id)infoDictionary;
- (void)setupParameters;
- (id)experimentName;
- (void)logExposure;
- (id)init;

@end
