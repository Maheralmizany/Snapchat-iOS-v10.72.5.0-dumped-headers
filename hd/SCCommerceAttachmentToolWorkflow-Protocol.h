//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCCommerceAttachmentProvider, SOJUCommerceStoreInfo, UIViewController;

@protocol SCCommerceAttachmentToolWorkflow
@property(readonly, nonatomic) id <SCCommerceEventLogger> eventLogger;
@property(copy, nonatomic) SOJUCommerceStoreInfo *storeInfo;
@property(nonatomic) __weak SCCommerceAttachmentProvider *attachmentProvider;
- (UIViewController *)attachmentViewControllerToPresent;
@end
