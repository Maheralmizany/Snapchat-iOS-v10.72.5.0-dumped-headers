//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCRefreshAheadItemCallback : NSObject
{
    id <SCPerforming> _performer;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)invokeWithItem:(id)arg1 error:(id)arg2;
- (id)initWithCallbackPerformer:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

