//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCFriendsFeedCall, SCFriendsFeedChatMessage, SCFriendsFeedMediaSaveMessage, SCFriendsFeedMultiRecipientContent, SCFriendsFeedSavedSnapMessage, SCFriendsFeedScreenshotMessage, SCFriendsFeedSnapMessage;

@interface SCFriendsFeedMessageContent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCFriendsFeedSnapMessage *_snap_snap;
    SCFriendsFeedCall *_call_callContent;
    SCFriendsFeedScreenshotMessage *_screenshot_screenshot;
    SCFriendsFeedMediaSaveMessage *_mediaSave_mediaSave;
    SCFriendsFeedChatMessage *_chat_chat;
    SCFriendsFeedMultiRecipientContent *_multiRecipient_multiRecipientContent;
    SCFriendsFeedSavedSnapMessage *_savedSnap_savedSnap;
}

+ (id)snapWithSnap:(id)arg1;
+ (id)screenshotWithScreenshot:(id)arg1;
+ (id)savedSnapWithSavedSnap:(id)arg1;
+ (id)multiRecipientWithMultiRecipientContent:(id)arg1;
+ (id)mediaSaveWithMediaSave:(id)arg1;
+ (id)chatWithChat:(id)arg1;
+ (id)callWithCallContent:(id)arg1;
- (void).cxx_destruct;
- (void)matchSnap:(CDUnknownBlockType)arg1 call:(CDUnknownBlockType)arg2 screenshot:(CDUnknownBlockType)arg3 mediaSave:(CDUnknownBlockType)arg4 chat:(CDUnknownBlockType)arg5 multiRecipient:(CDUnknownBlockType)arg6 savedSnap:(CDUnknownBlockType)arg7;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
