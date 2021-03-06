//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCAddFriendsPageEventObservableRepository.h"

@class NSString, SCLazy, SCObservable, UIViewController;

@interface SCAddFriendsShareMySnapcodeToMoreActionHandler : NSObject <SCAddFriendsPageEventObservableRepository, SCActionHandling>
{
    UIViewController *_presentingViewController;
    SCLazy *_mySnapcodeImageProvider;
    SCObservable *_pageEventObservable;
}

@property(retain, nonatomic) SCObservable *pageEventObservable; // @synthesize pageEventObservable=_pageEventObservable;
- (void).cxx_destruct;
- (void)_presentMySnapcodeImage:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithPresentingViewController:(id)arg1 mySnapcodeImageProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

