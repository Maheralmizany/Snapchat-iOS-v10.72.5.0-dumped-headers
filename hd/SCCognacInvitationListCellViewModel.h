//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCSnapchatterThumbnailViewModel, UIImage;

@interface SCCognacInvitationListCellViewModel : NSObject <NSCopying>
{
    SCSnapchatterThumbnailViewModel *_thumbnailViewModel;
    NSString *_inviterNameText;
    NSString *_descriptionText;
    UIImage *_privacyIcon;
}

@property(readonly, copy, nonatomic) UIImage *privacyIcon; // @synthesize privacyIcon=_privacyIcon;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *inviterNameText; // @synthesize inviterNameText=_inviterNameText;
@property(readonly, copy, nonatomic) SCSnapchatterThumbnailViewModel *thumbnailViewModel; // @synthesize thumbnailViewModel=_thumbnailViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithThumbnailViewModel:(id)arg1 inviterNameText:(id)arg2 descriptionText:(id)arg3 privacyIcon:(id)arg4;

@end

