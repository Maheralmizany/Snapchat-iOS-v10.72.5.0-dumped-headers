//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCNetworkImage;

@interface SCOAuth2PermissionCellViewModel : NSObject
{
    _Bool _isToggleable;
    NSString *_permissionDescription;
    SCNetworkImage *_permissionIconNetworkImage;
    NSString *_permissionName;
}

@property(readonly, copy, nonatomic) NSString *permissionName; // @synthesize permissionName=_permissionName;
@property(readonly, nonatomic) _Bool isToggleable; // @synthesize isToggleable=_isToggleable;
@property(readonly, nonatomic) SCNetworkImage *permissionIconNetworkImage; // @synthesize permissionIconNetworkImage=_permissionIconNetworkImage;
@property(readonly, copy, nonatomic) NSString *permissionDescription; // @synthesize permissionDescription=_permissionDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPermissionIconNetworkImage:(id)arg1 description:(id)arg2 isToggleable:(_Bool)arg3 permissionName:(id)arg4;

@end

