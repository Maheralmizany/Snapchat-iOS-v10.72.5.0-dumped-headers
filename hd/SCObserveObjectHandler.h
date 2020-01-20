//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface SCObserveObjectHandler : NSObject
{
    Class _objectClass;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _changeHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
- (void).cxx_destruct;
- (void)perform:(id)arg1 changedKeys:(id)arg2;
- (void)invalidate;
- (id)initWithObjectClass:(Class)arg1 queue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;

@end

