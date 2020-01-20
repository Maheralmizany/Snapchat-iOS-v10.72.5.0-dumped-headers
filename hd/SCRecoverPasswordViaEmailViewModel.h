//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCRecoverPasswordViaEmailViewModel : NSObject <NSCopying>
{
    _Bool _showActivityIndicator;
    _Bool _enableBackButton;
    _Bool _enableForwardButton;
    _Bool _isLoading;
    NSString *_errorMessage;
}

@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) _Bool enableForwardButton; // @synthesize enableForwardButton=_enableForwardButton;
@property(readonly, nonatomic) _Bool enableBackButton; // @synthesize enableBackButton=_enableBackButton;
@property(readonly, nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShowActivityIndicator:(_Bool)arg1 enableBackButton:(_Bool)arg2 enableForwardButton:(_Bool)arg3 isLoading:(_Bool)arg4 errorMessage:(id)arg5;

@end
