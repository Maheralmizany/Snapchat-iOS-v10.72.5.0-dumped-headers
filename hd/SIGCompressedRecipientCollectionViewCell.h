//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIGRecipientCollectionViewCell.h"

#import "SCActionHandlingDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString;

@interface SIGCompressedRecipientCollectionViewCell : SIGRecipientCollectionViewCell <UIGestureRecognizerDelegate, SCActionHandlingDelegate>
{
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (unsigned long long)cellStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

