//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSessionRequestManager;

@interface SCEmojiBrushService : NSObject
{
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)fetchEmojiBrushResource:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1;

@end

