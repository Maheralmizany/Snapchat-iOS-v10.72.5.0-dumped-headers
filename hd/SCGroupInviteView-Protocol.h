//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCGroupInvite;

@protocol SCGroupInviteView <NSObject>
@property(copy, nonatomic) CDUnknownBlockType footerButtonAction;
@property(copy, nonatomic) NSString *footerButtonText;
@property(retain, nonatomic) id <SCGroupInviteVenueSearchProvider> venueSearchProvider;
@property(nonatomic) __weak id <SCGroupInviteViewDelegate> groupStickerEditingDelegate;
- (void)resignFocus;
- (void)focusDefaultTextField;
- (double)preferredWidth;
- (SCGroupInvite *)stickerModel;
- (void)setGroupStickerModel:(SCGroupInvite *)arg1 editable:(_Bool)arg2;

@optional
@property(nonatomic) _Bool collapsedToShowTitleOnly;
- (void)focusTimeField;
- (void)focusLocationField;
@end

