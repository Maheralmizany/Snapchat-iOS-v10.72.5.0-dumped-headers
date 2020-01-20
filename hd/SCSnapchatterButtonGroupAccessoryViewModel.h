//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCSearchActionButtonViewModel;

@interface SCSnapchatterButtonGroupAccessoryViewModel : NSObject <NSCopying>
{
    SCSearchActionButtonViewModel *_firstActionButtonViewModel;
    SCSearchActionButtonViewModel *_secondActionButtonViewModel;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *secondActionButtonViewModel; // @synthesize secondActionButtonViewModel=_secondActionButtonViewModel;
@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *firstActionButtonViewModel; // @synthesize firstActionButtonViewModel=_firstActionButtonViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirstActionButtonViewModel:(id)arg1 secondActionButtonViewModel:(id)arg2 contentInsets:(struct UIEdgeInsets)arg3;

@end
