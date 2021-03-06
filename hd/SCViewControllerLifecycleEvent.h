//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCViewControllerLifecycleEvent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    _Bool _viewWillAppear_animated;
    _Bool _viewDidAppear_animated;
    _Bool _viewWillDisappear_animated;
    _Bool _viewDidDisappear_animated;
}

+ (id)viewWillDisappearWithAnimated:(_Bool)arg1;
+ (id)viewWillAppearWithAnimated:(_Bool)arg1;
+ (id)viewDidLoad;
+ (id)viewDidDisappearWithAnimated:(_Bool)arg1;
+ (id)viewDidAppearWithAnimated:(_Bool)arg1;
- (void)matchViewDidLoad:(CDUnknownBlockType)arg1 viewWillAppear:(CDUnknownBlockType)arg2 viewDidAppear:(CDUnknownBlockType)arg3 viewWillDisappear:(CDUnknownBlockType)arg4 viewDidDisappear:(CDUnknownBlockType)arg5;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

