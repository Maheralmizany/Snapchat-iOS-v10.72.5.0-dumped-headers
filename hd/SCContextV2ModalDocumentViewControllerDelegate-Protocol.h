//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCTXGroupInviteAction, SCContextV2ModalDocumentViewController;

@protocol SCContextV2ModalDocumentViewControllerDelegate <NSObject>
- (void)contextModalDocumentViewControllerDidDismiss:(SCContextV2ModalDocumentViewController *)arg1;
- (void)contextModalDocumentViewControllerWantsToDismissContextCards:(SCContextV2ModalDocumentViewController *)arg1 completion:(void (^)(void))arg2;
- (void)contextModalDocumentViewController:(SCContextV2ModalDocumentViewController *)arg1 wantsToOpenGroupInviteFor:(SCCTXGroupInviteAction *)arg2 triggerInfo:(id <SCContextActionTriggering>)arg3;
@end

