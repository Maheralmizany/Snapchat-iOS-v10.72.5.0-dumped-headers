//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString;

@interface SCChatSenderLineAndHeaderViewModelGenerator : NSObject <SCTraceEnabled>
{
}

+ (id)senderLineViewModelWithSender:(id)arg1 recipient:(id)arg2 currentUser:(id)arg3 group:(id)arg4 isSaved:(_Bool)arg5 height:(double)arg6 cornerMask:(unsigned long long)arg7 status:(long long)arg8 isFailedAtLeastOnce:(_Bool)arg9;
+ (id)senderHeaderViewModelWithSender:(id)arg1 recipient:(id)arg2 currentUser:(id)arg3 group:(id)arg4 status:(long long)arg5 isFailedAtLeastOnce:(_Bool)arg6 isShowingDateHeader:(_Bool)arg7 payloadWidth:(double)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

