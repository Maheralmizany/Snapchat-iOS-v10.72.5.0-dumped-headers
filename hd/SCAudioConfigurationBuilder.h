//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCAudioConfigurationBuilder : NSObject
{
    long long _category;
    long long _mode;
    _Bool _shouldEnableProximity;
    _Bool _defaultToSpeaker;
    _Bool _allowRecordWithBluetooth;
    _Bool _allowRecordWithBluetoothA2DP;
    _Bool _mixWithOthers;
    NSString *_label;
    _Bool _shouldDisableRetry;
    _Bool _shouldDeactivate;
    _Bool _shouldActivate;
}

+ (id)audioConfigurationFromExistingAudioConfiguration:(id)arg1;
+ (id)audioConfiguration;
- (void).cxx_destruct;
- (id)withShouldActivate:(_Bool)arg1;
- (id)withShouldDeactivate:(_Bool)arg1;
- (id)withShouldDisableRetry:(_Bool)arg1;
- (id)withLabel:(id)arg1;
- (id)withMixWithOthers:(_Bool)arg1;
- (id)withAllowRecordWithBluetoothA2DP:(_Bool)arg1;
- (id)withAllowRecordWithBluetooth:(_Bool)arg1;
- (id)withDefaultToSpeaker:(_Bool)arg1;
- (id)withShouldEnableProximity:(_Bool)arg1;
- (id)withMode:(long long)arg1;
- (id)withCategory:(long long)arg1;
- (id)build;

@end

