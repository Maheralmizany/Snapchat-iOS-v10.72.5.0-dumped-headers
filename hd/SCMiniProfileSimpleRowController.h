//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMiniProfileRowController.h"

@class NSString, UIImage;

@interface SCMiniProfileSimpleRowController : SCMiniProfileRowController
{
    UIImage *_image;
    NSString *_text;
    NSString *_detailText;
    NSString *_accessibilityIdentifier;
    id _target;
    SEL _selector;
    _Bool _disabled;
    id _userInfo;
}

+ (id)disabledRowControllerWithImage:(id)arg1 text:(id)arg2 detailText:(id)arg3 accessibilityIdentifier:(id)arg4;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain) id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)didSelectCell;
- (_Bool)shouldSelectCell;
- (void)willDisplayCell:(id)arg1;
- (double)cellHeight;
- (Class)cellClass;
- (id)initWithImage:(id)arg1 text:(id)arg2 detailText:(id)arg3 accessibilityIdentifier:(id)arg4 target:(id)arg5 selector:(SEL)arg6;

@end

