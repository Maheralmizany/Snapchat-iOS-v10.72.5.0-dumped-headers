//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTextSending.h"

@class SCLazy;

@interface SCTextSender : NSObject <SCTextSending>
{
    SCLazy *_coreMessageSender;
}

- (void).cxx_destruct;
- (void)sendAttributedTextMessage:(id)arg1 conversations:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCoreMessageSender:(id)arg1;

@end

