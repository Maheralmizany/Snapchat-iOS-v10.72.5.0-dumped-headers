//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@interface SCChatMessageReleaserProxy : NSProxy
{
    id <SCChatMessageReleaser> _v3Releaser;
    id <SCChatMessageReleaser> _arroyoReleaser;
    _Bool _isArroyoConversation;
}

- (void).cxx_destruct;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)debugDescription;
- (id)description;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)_activeMessageReleaser;
- (id)initWithV3MessageRelease:(id)arg1 arroyoMessageReleaser:(id)arg2;

@end

