//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapActionsActionHandlerProviding.h"

@class SCObservable;

@interface SCSnapActionsActionHandlerProvider : NSObject <SCSnapActionsActionHandlerProviding>
{
    SCObservable *_actionProvidersObservable;
}

- (void).cxx_destruct;
- (id)createActionHandlerWithTargetViewController:(id)arg1 legacyActionHandler:(id)arg2 paramsObservable:(id)arg3;
- (id)initWithActionProvidersObservable:(id)arg1;

@end
