//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, UIImage;

@interface MGLAnnotationImage : NSObject <NSSecureCoding>
{
    _Bool _enabled;
    UIImage *_image;
    NSString *_reuseIdentifier;
    NSString *_styleIconIdentifier;
    id <MGLAnnotationImageDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
+ (id)annotationImageWithImage:(id)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) __weak id <MGLAnnotationImageDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *styleIconIdentifier; // @synthesize styleIconIdentifier=_styleIconIdentifier;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 reuseIdentifier:(id)arg2;

@end

