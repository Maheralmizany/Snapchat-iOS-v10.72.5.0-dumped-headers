//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCComposerMarshallable.h"

@class NSString, SCComposerRef;

@protocol SCMapCurrentStatusContext <NSObject, SCComposerMarshallable>
- (void)didTapDeleteButton;
- (void)didTapDismissButton;
- (void)didLongPressViewerWithUserId:(NSString *)arg1;
- (void)didTapAvatarOfViewerWithUserId:(NSString *)arg1 avatarView:(SCComposerRef *)arg2;
@end

