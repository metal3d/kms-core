/*
 * (C) Copyright 2014 Kurento (http://kurento.org/)
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser General Public License
 * (LGPL) version 2.1 which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-2.1.html
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 */
#ifndef __KMS_FILTER_TYPE_H__
#define __KMS_FILTER_TYPE_H__

G_BEGIN_DECLS

typedef enum
{
  KMS_FILTER_TYPE_AUTODETECT,
  KMS_FILTER_TYPE_AUDIO,
  KMS_FILTER_TYPE_VIDEO,
} KmsFilterType;

G_END_DECLS
#endif /* __KMS_FILTER_TYPE__ */
