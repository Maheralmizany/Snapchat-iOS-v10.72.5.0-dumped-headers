//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNMessagingSnapManager : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::messaging::SnapManager>, std::__1::shared_ptr<snap::messaging::SnapManager>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSnapReplayStateRequested:(id)arg1 callback:(id)arg2;
- (void)onSnapDownloadStatusChanged:(long long)arg1 conversationId:(id)arg2 messageId:(long long)arg3 callback:(id)arg4;
- (void)onSnapInteraction:(long long)arg1 conversationId:(id)arg2 messageId:(long long)arg3 callback:(id)arg4;
- (id)initWithCpp:(const shared_ptr_85251cd7 *)arg1;

@end

