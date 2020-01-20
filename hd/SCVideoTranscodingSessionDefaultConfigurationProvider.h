//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCVideoTranscodingSessionConfigurationProvider.h"

@class NSString, SCVideoTranscodingConfigurationProviderInput;

@interface SCVideoTranscodingSessionDefaultConfigurationProvider : NSObject <SCVideoTranscodingSessionConfigurationProvider>
{
    SCVideoTranscodingConfigurationProviderInput *_input;
    long long _level;
}

- (void).cxx_destruct;
- (id)videoTranscodingConfigurationWithMediaSource:(unsigned long long)arg1 mediaDestination:(unsigned long long)arg2;
- (id)initWithConfigurationProviderInput:(id)arg1 mediaQualityLevel:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
