//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCMyFriendsScope : NSObject
{
    id <SCUIContainer> _uiContainer;
    id <NavigationDelegate> _navigationDelegate;
    id <SCMyFriendsWorkflowDelegate> _workflowDelegate;
}

@property(readonly, nonatomic) __weak id <SCMyFriendsWorkflowDelegate> workflowDelegate; // @synthesize workflowDelegate=_workflowDelegate;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
- (void).cxx_destruct;
- (id)initWithUIContainer:(id)arg1 navigationDelegate:(id)arg2 workflowDelegate:(id)arg3;

@end

