//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCMediaOrchestrationCallback : NSObject
{
    id <SCPerforming> _performer;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)invokeCallbackWithResult:(id)arg1;
- (id)initWithPerformer:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

