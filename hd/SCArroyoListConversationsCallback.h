//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNMessagingListLocalConversationsCallback.h"

@interface SCArroyoListConversationsCallback : NSObject <SCNMessagingListLocalConversationsCallback>
{
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _failureCallback;
}

- (void).cxx_destruct;
- (void)onListLocalConversationsComplete:(id)arg1;
- (void)onListConversationsComplete:(id)arg1;
- (void)onError:(long long)arg1;
- (id)initWithSucccessCallback:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2;

@end

