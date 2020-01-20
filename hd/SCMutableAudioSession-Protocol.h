//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioSession, NSString, SCAudioConfiguration, SCAudioConfigurationToken;

@protocol SCMutableAudioSession <NSObject>
@property(retain, nonatomic) NSString *lastRecordingRequestDebugInfo;
- (void)updateToken:(struct NSString *)arg1 configuration:(void (^)(SCAudioSessionConfigurationMaker *))arg2 callbackPerformer:(id <SCPerforming>)arg3 callback:(void (^)(NSError *))arg4;
- (struct NSString *)generateNewTokenWithLabel:(NSString *)arg1;
- (void)updateConfigurationIfNeeded;
- (SCAudioConfigurationToken *)updateOldConfigurationToken:(SCAudioConfigurationToken *)arg1 replaceConfiguration:(SCAudioConfiguration *)arg2 performer:(id <SCPerforming>)arg3 completion:(void (^)(NSError *))arg4;
- (void)callKitWillDeactivateAudioSession:(AVAudioSession *)arg1;
- (void)callKitDidActivateAudioSession:(AVAudioSession *)arg1;
- (void)relinquishConfiguration:(SCAudioConfigurationToken *)arg1 performer:(id <SCPerforming>)arg2 completion:(void (^)(NSError *))arg3;
- (SCAudioConfigurationToken *)configureWith:(SCAudioConfiguration *)arg1 performer:(id <SCPerforming>)arg2 completion:(void (^)(NSError *))arg3;
@end

