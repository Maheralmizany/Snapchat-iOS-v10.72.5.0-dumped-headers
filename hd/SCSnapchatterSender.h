//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapchatterSending.h"

@class SCLazy;

@interface SCSnapchatterSender : NSObject <SCSnapchatterSending>
{
    SCLazy *_coreMessageSender;
}

- (void).cxx_destruct;
- (void)sendSnapchatterWithUserId:(id)arg1 conversationIds:(id)arg2;
- (id)initWithCoreMessageSender:(id)arg1;

@end
