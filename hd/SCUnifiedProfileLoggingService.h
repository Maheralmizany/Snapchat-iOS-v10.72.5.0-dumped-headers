//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventListener.h"
#import "SCUnifiedProfileUsageLoggerDelegate.h"

@class NSString, SCFriendUnifiedProfileDataSource, SCProfileChatMediaContentDownloadingLogger, SCUnifiedProfilePerformanceLogger, SCUnifiedProfileUsageLogger;

@interface SCUnifiedProfileLoggingService : NSObject <SCUnifiedProfileUsageLoggerDelegate, SCEventListener>
{
    SCProfileChatMediaContentDownloadingLogger *_savedInChatCardMediaLogger;
    SCUnifiedProfileUsageLogger *_usageLogger;
    SCUnifiedProfilePerformanceLogger *_performanceLogger;
    SCFriendUnifiedProfileDataSource *_friendDataSource;
}

@property(nonatomic) __weak SCFriendUnifiedProfileDataSource *friendDataSource; // @synthesize friendDataSource=_friendDataSource;
- (void).cxx_destruct;
- (id)snapchatterToLogForUnifiedProfileUsageLogger:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithProfileType:(unsigned long long)arg1 sessionId:(id)arg2 openningData:(id)arg3 profileIdentifier:(id)arg4 messagingInfra:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

