//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@interface SCLazyLoadingProxy : NSProxy
{
    id _target;
    CDUnknownBlockType _initializationBlock;
    long long _onceToken;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)debugDescription;
- (id)description;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithInitializationBlock:(CDUnknownBlockType)arg1;

@end
