//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"

@class NSString;

@interface SCGroupUnifiedProfileActionMenuActionHandler : NSObject <SCActionHandling>
{
    id <SCGroupUnifiedProfileActionMenuActionHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGroupUnifiedProfileActionMenuActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissActionMenu;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

