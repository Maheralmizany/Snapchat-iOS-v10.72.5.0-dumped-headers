//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCFeature : NSObject
{
    long long _initializationPriority;
}

@property(nonatomic) long long initializationPriority; // @synthesize initializationPriority=_initializationPriority;
- (_Bool)isFeatureEnabled;
- (id)usageMetrics;
- (void)resetMetrics;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (id)init;

@end
