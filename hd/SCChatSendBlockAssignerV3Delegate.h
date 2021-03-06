//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatSendBlockAssignerDelegate.h"

@class NSString;

@interface SCChatSendBlockAssignerV3Delegate : NSObject <SCChatSendBlockAssignerDelegate>
{
    NSString *_username;
    NSString *_userId;
}

+ (_Bool)messagesAreFailedMultiSnaps:(id)arg1;
- (void).cxx_destruct;
- (id)castToV3Message:(id)arg1;
- (_Bool)_messageNeedsItsOwnBlock:(id)arg1;
- (_Bool)canMergeBlockForMessage:(id)arg1 withPreviousMessage:(id)arg2;
- (_Bool)messageNeedsBlock:(id)arg1;
- (id)initWithUsername:(id)arg1 userId:(id)arg2;

@end

