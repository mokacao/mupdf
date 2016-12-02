//
//  MuSignView.h
//  MxPDF
//
//  Created by 曾亮 on 2016/11/22.
//  Copyright © 2016年 Artifex Software, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "mupdf/pdf.h"

@protocol MuSignViewDelegate
@optional
- (void)imagePositionOk: (CGRect)imagerectOnPage;
- (void)imagePositionNotOk;
@end

@interface MuSignView : UIView
@property (retain, nonatomic) id<MuSignViewDelegate> delegate;
@property (copy, nonatomic, setter=setimagefile:) NSString* imagefile;
@property (readonly, nonatomic, getter=getImagerectOnPage)CGRect imagerectOnPage;
@property (readonly, assign, nonatomic, getter=getSignAppearance)z_pdf_sign_appearance *signapp;
-(instancetype) initWithPageSize:(CGSize)pagesize;
@end
